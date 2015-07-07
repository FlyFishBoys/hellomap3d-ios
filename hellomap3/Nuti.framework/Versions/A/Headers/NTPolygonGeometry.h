/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.6
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


#import "NTMapPos.h"
#import "NTGeometry.h"
#import "NTMapPosVector.h"
#import "NTMapPosVectorVector.h"

/**
 * Polygon geometry defined by an outer ring and optional multiple inner rings (holes).
 */
__attribute__ ((visibility("default"))) @interface NTPolygonGeometry : NTGeometry
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTPolygonGeometry*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a PolygonGeometry objects from an outer ring.<br>
 * @param poses The list of map positions defining the outer ring.
 */
-(id)initWithPoses: (NTMapPosVector*)poses;
/**
 * Constructs a PolygonGeometry objects from an outer ring and list of inner rings (holes).<br>
 * @param poses The list of map positions defining the outer ring.<br>
 * @param holes The list of map position lists defining the inner rings.
 */
-(id)initWithPoses: (NTMapPosVector*)poses holes: (NTMapPosVectorVector*)holes;
/**
 * Constructs a PolygonGeometry objects from a list of rings.<br>
 * It is assumed the the first ring is outer ring and all other rings are inner rings.<br>
 * @param rings The list of map position lists defining the rings
 */
-(id)initWithRings: (NTMapPosVectorVector*)rings;
-(NTMapPos*)getCenterPos;
/**
 * Returns the list of map positions defining the outer ring of the polygon.<br>
 * @return The list of map positions defining the outer ring of the polygon.
 */
-(NTMapPosVector*)getPoses;
/**
 * Returns the list of map position lists defining the inner rings of the polygon (holes).<br>
 * @return The list of map position lists defining the inner rings of the polygon (holes).
 */
-(NTMapPosVectorVector*)getHoles;
/**
 * Returns the list of map position lists defining the rings of the polygon.<br>
 * @return The list of map position lists defining the rings of the polygon.
 */
-(NTMapPosVectorVector*)getRings;
/**
 * Returns the actual class name of this object. This is used internally by the SDK.<br>
 * @return The class name of this object.
 */
-(NSString*)swigGetClassName;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif

