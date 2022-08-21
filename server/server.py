import asyncio
from fastapi import FastAPI
from CFlames.cython.flames_module import PyFlames

app = FastAPI()

@app.get("/flames/{a}/{b}")
def flames_handler(a:str,b:str):
    a_bytes:bytes = a.encode("utf-8")
    b_bytes:bytes = b.encode("utf-8")
    relationship:str = PyFlames(a_bytes,b_bytes).decode('utf-8')
    return {"relationship":relationship}




    