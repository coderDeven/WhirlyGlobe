//
//  ElevationPyramid.h
//  elev_assemble_pyramid
//
//  Created by Steve Gifford on 9/6/13.
//  Copyright (c) 2013 mousebird consulting. All rights reserved.
//

#ifndef __elev_assemble_pyramid__ElevationPyramid__
#define __elev_assemble_pyramid__ElevationPyramid__

#include <iostream>
#include "gdal.h"
#include "KompexSQLitePrerequisites.h"
#include "KompexSQLiteDatabase.h"
#include "KompexSQLiteStatement.h"
#include "KompexSQLiteException.h"
#include "KompexSQLiteStreamRedirection.h"
#include "KompexSQLiteBlob.h"
#include "KompexSQLiteException.h"

/** Elevation Pyramid is used to construct the elevation pyramid in a sqlite database.
  */
class ElevationPyramid
{
public:
    ElevationPyramid(Kompex::SQLiteDatabase *db,const char *srs,GDALDataType dataType,double minX,double minY,double maxX,double maxY,unsigned int tileSizeX,unsigned int tileSizeY,bool compress,int minLevel,int maxLevel);
    
    // Load the elevaiton tile and add it to the sqlite db
    bool addElevationTile(void *tileData,int x,int y,int level);
    
    // Create the quadIndex index
    void createIndex();
    
    // Close any open statements and such
    void flush();
    
protected:
    Kompex::SQLiteDatabase *db;
    unsigned int tileSizeX,tileSizeY;
    GDALDataType dataType;
    bool compress;
    bool valid;
    // Precompiled insert statement
    Kompex::SQLiteStatement *insertStmt;
};

#endif /* defined(__elev_assemble_pyramid__ElevationPyramid__) */
