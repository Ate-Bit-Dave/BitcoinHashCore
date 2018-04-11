#ifndef CLIENTVERSION_H
#define CLIENTVERSION_H

//
// client versioning and copyright year
//
// History Litecoin Ver 0.8.7.5 Used to build BitcoinhashCore 10.00.00.5 in 2015
// Minor Updates Done By Ate-Bit-Dave 2018 to Version 10.01.01.06
//
// These need to be macros, as version.cpp's and bitcoin-qt.rc's voodoo requires it
#define CLIENT_VERSION_MAJOR       10
#define CLIENT_VERSION_MINOR       01
#define CLIENT_VERSION_REVISION    01
#define CLIENT_VERSION_BUILD       6

// Set to true for release, false for prerelease or test build
#define CLIENT_VERSION_IS_RELEASE  false

// Copyright year (2009-this)
// Todo: update this when changing our copyright comments in the source
#define COPYRIGHT_YEAR 2018

// Converts the parameter X to a string after macro replacement on X has been performed.
// Don't merge these into one macro!
#define STRINGIZE(X) DO_STRINGIZE(X)
#define DO_STRINGIZE(X) #X

#endif // CLIENTVERSION_H
