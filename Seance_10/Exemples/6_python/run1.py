import time, argparse, numpy

def plot(x, u, t):
  pyplot.title('t = {0:.3f}'.format(t))
  pyplot.ylabel("Temperature (˚C)")
  pyplot.xlabel("Distance le long de la barre (m)")
  pyplot.pause(0.01)
  pyplot.cla()
  pyplot.plot(x, u, 'black')


p = argparse.ArgumentParser()
p.add_argument('-tmax', type=float, default=10.0)
p.add_argument('-lmax', type=float, default=100.0)
p.add_argument('-dx', type=float, default=0.02)
p.add_argument('-dt', type=float, default=-1.0)
p.add_argument('-plot', type=float, default=1.0)
args = p.parse_args()

k = .466
if args.dt < 0.0:
    args.dt = k*(args.dx*args.dx);
if args.plot < 0.0:
    args.plot = args.tmax/20
if args.plot > 0.0:
    from matplotlib import pyplot

length = args.lmax
temp_left = 200
temp_right = 200

tmax = args.tmax
dx = args.dx
x = numpy.linspace(0, length, int(length/dx))
n = x.size
dt = args.dt

print("L    = {0}\nTmax = {1}\nn    = {2}\ndx   = {3}\ndt   = {4:7.3g}\n".format \
      (length, tmax, n, dx, dt))

u = numpy.zeros([len(x)])
v = numpy.zeros([len(x)])

u[0] = temp_left
u[-1] = temp_right

v[0] = temp_left
v[-1] = temp_right

t0 = time.time()
nextPlotTime = 0.0
dtPlot = tmax/20;

l = k * (dt / dx**2)
t = 0.0
it = 0

while  t < tmax:

    if args.plot > 0 and t >= nextPlotTime:
        plot(x, u, t)
        nextPlotTime += args.plot

    it = it + 1
    t = t + dt
    for i in range(1, len(x)-1):
        v[i] =  l * (u[i+1] - 2*u[i] + u[i-1]) + u[i]

    u[:] = v[:]

    print('\riteration {0:6d} t = {1:.3f} cputime : {2:.3f}'.format(it, t, time.time() - t0), end='')

if args.plot > 0:
  plot(x, u, t)
print('\n')
