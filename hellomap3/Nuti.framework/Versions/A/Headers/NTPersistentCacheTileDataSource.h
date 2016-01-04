/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.11
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#import <Foundation/Foundation.h>


#ifdef __cplusplus
extern "C" {
#endif


#import "NTMapTile.h"
#import "NTCacheTileDataSource.h"
#import "NTTileData.h"

/**
 * A tile data source that loads tiles from another tile data source<br>
 * and caches them in an offline sqlite database. Tiles will remain in the database<br>
 * even after the application is closed.<br>
 * The database contains table "persistent_cache" with the following fields:<br>
 * "tileId" (tile id), "compressed" (compressed tile image),<br>
 * "time" (the time the tile was cached in milliseconds from epoch).<br>
 * Default cache capacity is 50MB.
 */
__attribute__ ((visibility("default"))) @interface NTPersistentCacheTileDataSource : NTCacheTileDataSource
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 */
+(NTPersistentCacheTileDataSource*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a PersistentCacheTileDataSource object from tile data source<br>
 * and a sqlite database. The sqlite database must be writable, if it doesn't exist, an empty one<br>
 * will be created instead.<br>
 * @param dataSource The datasource to be cached.<br>
 * @param databasePath The path to the sqlite database, where the tiles will be cached.
 */
-(id)initWithDataSource: (NTTileDataSource*)dataSource databasePath: (NSString*)databasePath;
/**
 * Returns the state of cache only mode.<br>
 * @return True when cache only mode is enabled, false otherwise.
 */
-(BOOL)isCacheOnlyMode;
/**
 * Switches the datasource to 'cache only' mode or switches back from the mode.<br>
 * If enabled, tiles are loaded from the cache only and the original data source is not used.<br>
 * By default, cache only mode is off.<br>
 * @param enabled True when the mode should be enabled, false otherwise.
 */
-(void)setCacheOnlyMode: (BOOL)enabled;
/**
 * Close the cache database. The datasource will still work afterwards,<br>
 * but all requests will be directed to the original datasource.
 */
-(void)close;
/**
 * Close the cache database. The datasource will still work afterwards,<br>
 * but all requests will be directed to the original datasource.
 */
-(void)closeSwigExplicitNTPersistentCacheTileDataSource;
-(NTTileData*)loadTile: (NTMapTile*)mapTile;
-(NTTileData*)loadTileSwigExplicitNTPersistentCacheTileDataSource: (NTMapTile*)mapTile;
-(void)clear;
-(void)clearSwigExplicitNTPersistentCacheTileDataSource;
-(unsigned int)getCapacity;
-(unsigned int)getCapacitySwigExplicitNTPersistentCacheTileDataSource;
-(void)setCapacity: (unsigned int)capacity;
-(void)setCapacitySwigExplicitNTPersistentCacheTileDataSource: (unsigned int)capacity;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.<br>
 * @return The class name of this object.
 */
-(NSString*)swigGetClassName;
/**
 * Returns the pointer to the connected director object. This is used internally by the SDK.<br>
 * @return The pointer to the connected director object or null if director is not connected.
 */
-(void *)swigGetDirectorObject;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

