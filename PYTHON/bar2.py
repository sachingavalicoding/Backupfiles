import matplotlib.pyplot as plt 

left = [1,2,3,4,5]
height = [68,90,70,85,91]

data = ['Maths', 'Science','English',' Marathi','Hindi']

plt.bar(left,height,data = data, width=0.4,color =['green'])
plt.xlabel('Subjects')
plt.ylabel('Percentage')
plt.title('Bar')

plt.show()