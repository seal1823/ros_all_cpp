from setuptools import find_packages
from setuptools import setup

setup(
    name='create_own_msg',
    version='0.0.0',
    packages=find_packages(
        include=('create_own_msg', 'create_own_msg.*')),
)
