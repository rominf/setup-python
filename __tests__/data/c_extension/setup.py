from setuptools import Extension, setup

setup(
    ext_modules=[
        Extension(
            name="helloworld",
            sources=["hello_world.c"],
        ),
    ]
)
