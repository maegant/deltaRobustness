# deltaRobustness
This repository includes the code to algorithmically check $\delta$-robustness, as well as its application towards validating $\delta$-robustness for a bipedal walking gait.

## Setup
The periodic orbits were generated using a modification of the FROST Toolbox ([Modified Toolbox](https://github.com/maegant/frost-multiimpact), [Original Toolbox](http://ayonga.github.io/frost-dev/)). Therefore, the modified toolbox is imcluded in the repository since it is needed to run the simulation code. 
```
git clone --recursive https://github.com/maegant/deltaRobustness.git
```

### Frost Setup
To setup FROST, please follow the installation instructions on the FROST website (https://ayonga.github.io/frost-dev/pages/installation.html). This includes adding the following two lines to your ~/.bashrc (make sure to update the path with the version of Mathematica you have)
```
LD_LIBRARY_PATH=/usr/local/Wolfram/Mathematica/12.0/SystemFiles/Links/MathLink/DeveloperKit/Linux-x86-64/CompilerAdditions:$LD_LIBRARY_PATH
LD_LIBRARY_PATH=/usr/local/Wolfram/Mathematica/12.0/SystemFiles/Links/WSTP/DeveloperKit/Linux-x86-64/CompilerAdditions:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH
```

You can test if you've properly setup FROST by running the following initialization function in MATLAB
```
>> frost_addpath();
```

## Main Script
To run the code, use the `main_script.m` script. I suggest running each section individually since some sections take several minutes to run and the figures may overwrite

## Main Algorithm
The main implementation of the $\delta$-robustness optimization is contained within the @TestRobustness class in the function `RunAlgorithm`. Explicitly, the algorithm is as follows:

<p align="center">
  <img src="tools/algorithm.png" />
</p>

