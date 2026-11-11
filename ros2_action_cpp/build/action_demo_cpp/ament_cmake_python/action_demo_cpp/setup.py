from setuptools import find_packages
from setuptools import setup

setup(
    name='action_demo_cpp',
    version='0.0.0',
    packages=find_packages(
        include=('action_demo_cpp', 'action_demo_cpp.*')),
)
