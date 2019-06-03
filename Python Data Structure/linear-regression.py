import numpy as np
import matplotlib.pyplot as plt
def estimate_coef(x,y):
    n=np.size(x)
    #mean of vectors
    m_x,m_y=np.mean(x),np.mean(y)
    #cross deviation
    SS_xy=np.sum(y*x)-n*m_y*m_x
    SS_xx=np.sum(x*x)-n*m_x*m_x
    #calculating regression coefficient
    b_1=SS_xy/SS_xx
    b_0=m_y-b_1*m_x
    return (b_0,b_1)
def plot_regression_line(x,y,b,x_pred):
    pred_y=b[0]+b[1]*x_pred
    print("the predicted value is",pred_y)
    #plotting the actual points 
    plt.scatter(x,y,color="m",marker="o",s=30)
    #predicted response vectors
    y_pred=b[0]+b[1]*x
    #plotting regression line
    plt.plot(x,y_pred,color="g")
    #put labels
    plt.xlabel('x')
    plt.ylabel('y')
    #show plot
    plt.show()

x=np.array([0,1,2,3,4,5,6,7,8,9,10])
y=np.array([1,1,2,3,4,5,7,8,9,9,9])
x_pred=int(input("enter any value to be predicted"))
b=estimate_coef(x,y)
plot_regression_line(x,y,b,x_pred)
