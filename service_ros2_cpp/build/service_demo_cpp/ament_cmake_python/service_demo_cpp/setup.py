from setuptools import find_packages
from setuptools import setup

setup(
    name='service_demo_cpp',
    version='0.0.0',
    packages=find_packages(
        include=('service_demo_cpp', 'service_demo_cpp.*')),
)
