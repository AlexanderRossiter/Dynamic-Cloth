import numpy as np

ni = 50
nj = 50

x1 = 20
x2 = 780

y1 = 20
y2 = 400

mass = 1

def check_bounds(i,j):
    return 0 <= i < ni and 0 <= j < nj


xv,yv = np.meshgrid(np.linspace(x1,x2,ni),np.linspace(y1,y2,nj))

connectivity = []
test_points = [(-1,-1), (0,-1), (1,-1), (-1, 0), (1, 0), (-1, 1), (0, 1), (1, 1)]
#test_points = [(0,-1), (-1, 0), (1, 0), (0, 1), (1,1)]
test_points = [(0,-1), (-1, 0), (1, 0), (0, 1)]

for j in range(nj):
    for i in range(ni):
        neighbours = []
        for tp in test_points:
            if check_bounds(i+tp[0], j+tp[1]):
                neighbours.append(i+tp[0]+(j+tp[1])*ni)
        connectivity.append(neighbours)
                

with open('cloth_points', 'w') as f:
    f.write('{:.0f}\n'.format(ni*nj))
    for j in range(nj):
        for i in range(ni):
            f.write('{:3.6f}, {:3.6f}, {:3.6f}, {:3.6f}\n'.format(xv[j,i],yv[j,i],0,mass))
            

with open('cloth_connectivity', 'w') as f:
    for pnt in connectivity:
        for con_pnt in pnt:
            f.write('{:.0f},'.format(con_pnt))
        f.write('\n')
            
            
            
            
            
            
            
            