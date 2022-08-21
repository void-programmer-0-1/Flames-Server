from flames_module import PyFlames

a:str = "santosh".encode("utf-8")
b:str = "santoshee".encode("utf-8")

relationship:str = PyFlames(a,b)
print(f"{relationship.decode('utf-8')}")