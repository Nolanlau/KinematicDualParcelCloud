const word kinematicCloudName
(
    args.getOrDefault<word>("cloud", "kinematicCloud")
);

Info<< "Reading main droplet cloud" << endl;
basicKinematicCloud mainCloud
(
    "mainCloud",
    rhoInf,
    U,
    muc,
    g
);

Info<< "Reading satellite cloud" << endl;
basicKinematicCloud satelliteCloud
(
    "satelliteCloud",
    rhoInf,
    U,
    muc,
    g
);

