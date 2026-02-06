
A custom OpenFOAM solver for transient incompressible, turbulent flow with dual kinematic particle cloud simulations and surface film modelling.

## Overview

**kinematicDualParcelFoam** is a Lagrangian-Eulerian CFD solver built on OpenFOAM and largely based on kinematicParcelFoam. It enables simultaneous simulation of two independent particle clouds within the same incompressible flow field:

- **mainCloud**: Actively coupled to the flow field and can contribute source terms to the momentum equation.
- **satelliteCloud**: Evolved independently without affecting the flow field (useful for passive tracer particles or low-mass secondary clouds).

This dual-cloud approach provides significant computational efficiency when simulating systems with particles of different importance levels, such as spray-film interactions or multiphase flows with negligible mass secondary clouds.

## Installation

### Build Instructions

1. **Navigate to the solver directory**:
   ```bash
   cd kinematicDualParcelFoam
   ```

2. **Compile the solver**:
   ```bash
   wclean
   wmake
   ```

3. **Verify installation**:
   ```bash
   which kinematicParcelFoam
   ```
   The compiled executable will be located in `$FOAM_APPBIN/kinematicParcelFoam`

### Build Details

The solver is built using OpenFOAM's standard build system with:
- Source file: `kinematicDualParcelFoam.C`
- Header files: `createFields.H`, `createClouds.H`, `createFieldRefs.H`, `UEqn.H`, `pEqn.H`
- Compilation configured in `Make/files` and `Make/options`
- Links against: finiteVolume, fvOptions, turbulenceModels, dynamicMesh, lagrangian libraries

## Usage

An example case is provided. The case structure follows that of kinematicParcelFoam cases which can be referenced from the OpenFOAM provided tutorial cases. The main difference is that instead of the `kinematicCloudProperties` dictionary, two dictionaries called `mainCloudProperties` and `satelliteCloudProperties` are instead added in the `constant` directory to define the particle properties.




