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


#import "NTRasterTileLayer.h"
#import "NTTileDataSource.h"
#import "NTMapPos.h"
#import "NTStringMap.h"

/**
 * A special raster layer with UTFGrid interaction. The layer needs<br>
 * additional data source for UTF grid data and can used to query<br>
 * nearest feature info (tooltips) around a specified point.
 */
__attribute__ ((visibility("default"))) @interface NTUTFGridRasterTileLayer : NTRasterTileLayer
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**
 * Creates a polymorphic instance of the given native object. This is used internally by the SDK.
 */
+(NTUTFGridRasterTileLayer*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

-(id)initWithRasterDataSource: (NTTileDataSource*)rasterDataSource utfGridDataSource: (NTTileDataSource*)utfGridDataSource;
-(void)clearTileCaches: (BOOL)all;
/**
 * Locates and returns tooltips around the given map point.<br>
 * @param mapPos The map position for the tooltips.<br>
 * @param waitForData If true, then missing data is loaded and the call may block for several seconds. If false, then only cached/preloaded data is used.<br>
 * @return The attribute map of tooltips.
 */
-(NTStringMap*)getTooltips: (NTMapPos*)mapPos waitForData: (BOOL)waitForData;
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

