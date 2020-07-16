from django.shortcuts import render
from django.http import HttpResponse
import os.path
 
class ejercicios():
    def __init__(self, titulo, id_titulo):
        self.titulo = titulo
        self.id = id_titulo

def index (request):
    return render(request,'index.html')

def ejemplos(request):
    return render(request, 'Ejercicios.html')

def cpp(request):
    files = [file
            for file in os.listdir("static/docs/Cpp")
            if file.endswith(".txt") ]
    titulo = []
    files = sorted(files, 
                key=lambda x: int(x.partition('_')[2].partition('.')[0]))
    for file in files:
        f = open('static/docs/Cpp/'+file,'r')
        titulo.append(ejercicios(f.readlines()[0],
                            int(file[file.index("_")+1:file.index(".")])
                    ))
        f.close()
    contex = {'descripcion':titulo}
    return render(request, 'index-cpp.html', contex)

def ejercicios_cpp(request, EjercicioCpp):
    programa = open('static/docs/Cpp/Programa_'+EjercicioCpp+'.cpp','r')
    texto = open('static/docs/Cpp/Programa_'+EjercicioCpp+'.txt','r')
    codigo = programa.read()
    descripcion = texto.readlines()
    titulo = descripcion[0]
    descripcion = ''.join(descripcion[1:])
    programa.close()
    texto.close()
    contex = {'codigo':codigo,
            'titulo':titulo,
            'id_ejercicio':EjercicioCpp,
            'descripcion':descripcion}
    return render(request, 'EjerciciosCpp.html', contex)