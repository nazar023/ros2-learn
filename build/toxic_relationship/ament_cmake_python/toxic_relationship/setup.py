from setuptools import find_packages
from setuptools import setup

setup(
    name='toxic_relationship',
    version='0.0.0',
    packages=find_packages(
        include=('toxic_relationship', 'toxic_relationship.*')),
)
