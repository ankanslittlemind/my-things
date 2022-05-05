class personalDetails:
    def __init__(self, name, uid):
        self.name = name
        self.uid = uid
    def printData(self):
        print(self.name+',', self.uid)
a = personalDetails('Ankan', '20BCS5394')
print(a.name)
print(a.uid)
a.printData()