class A:
    def display(self):
        print("A")
class B(A):
    # def display(self):
    #     print("B")
    pass
class C(B):
    # def display(self):
    #     print("C")
    pass
        
a=C()
a.display()