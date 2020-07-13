from django.shortcuts import render
from django.http import HttpResponse
 
def index (request):
    return render(request,'index.html')

def users(request):
    return render(request, 'user.html')

def cpp(request):
    return render(request, 'index-cpp.html')

def ejercicios_cpp(request, EjercicioCpp):
    programa=open('WebIMP/templates/Cpp/'+EjercicioCpp+'.cpp','r')
    codigo = programa.read()
    programa.close()
    contex = {'codigo':codigo}
    return render(request, 'Cpp/Ejercicios.html', contex)