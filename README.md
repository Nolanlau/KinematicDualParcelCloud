# KinematicDualParcelCloud
OpenFOAM lagrangian solver based on kinematicParcelCloud. Main difference comes from the addition of a secondary satelliteCloud that is not coupled to the velocity field. The satelliteCloud is evolved independently to the original mainCloud (kinematicParcelCloud).
