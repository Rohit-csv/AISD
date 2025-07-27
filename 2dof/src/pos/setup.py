from setuptools import find_packages, setup

package_name = 'pos'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='rohit',
    maintainer_email='officialrohit0456@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'additional_service = pos.service:main',
            'additional_client = pos.client:main',
            'additional_position = pos.position:main',
            
        ],
    },
)
