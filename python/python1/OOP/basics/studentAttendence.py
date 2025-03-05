class student_Attendence:
    def __init__(self):
        self.dictStu = {}

    def attendence(self, student, attendence):
        self.dictStu[student] = attendence
        return self.dictStu

    def attendence_sheet(self, student, attendence):
        print(self.attendence(student, attendence))


student = input("Enter the name of a student : ")
attendence = input("He/She is present or absent P/A : ")
info = student_Attendence()
info.attendence_sheet(student, attendence)
