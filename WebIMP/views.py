from django.shortcuts import render
from django.http import HttpResponse
 
def index (request):
    return render(request,'index.html')

def users(request):
    return render(request, 'user.html')