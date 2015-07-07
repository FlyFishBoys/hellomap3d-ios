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


#import "NTMapBounds.h"
#import "NTMapPos.h"
#import "NTMapVec.h"
#import "NTGeometry.h"
#import "NTVectorElement.h"
#import "NTUnsignedCharVector.h"

/**
 * A 3D model that can be displayed on the map.<br>
 * <br>
 * NML models can be created from Collada files directly and placed anywhere on the map or converted from KMZ files.<br>
 * NML models are optimized for fast loading and rendering.
 */
__attribute__ ((visibility("default"))) @interface NTNMLModel : NTVectorElement
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTNMLModel*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a NMLModel object from a geometry object and serialized model data.<br>
 * @param geometry The geometry object that defines the location of this model.<br>
 * @param sourceModelData Serialized data for 3D model.
 */
-(id)initWithGeometry: (NTGeometry*)geometry sourceModelData: (NTUnsignedCharVector*)sourceModelData;
/**
 * Constructs a NMLModel object from a map position and serialized model data.<br>
 * @param pos The map position that defines the location of this model.<br>
 * @param sourceModelData Serialized data for 3D model.
 */
-(id)initWithPos: (NTMapPos*)pos sourceModelData: (NTUnsignedCharVector*)sourceModelData;
-(NTMapBounds*)getBounds;
/**
 * Sets the location for this model.<br>
 * @param geometry The new geometry object that defines the location of this model.
 */
-(void)setGeometry: (NTGeometry*)geometry;
/**
 * Sets the location for this model.<br>
 * @param pos The new map position that defines the location of this model.
 */
-(void)setPos: (NTMapPos*)pos;
/**
 * Returns the rotation axis of this model. If rotation angle is 0, then the axis is irrelevant.<br>
 * @return The rotation axis vector.
 */
-(NTMapVec*)getRotationAxis;
/**
 * Returns the rotation angle of this model.<br>
 * @return The rotation angle of this model in degrees.
 */
-(float)getRotationAngle;
/**
 * Sets the rotation of this model using an axis and an angle.<br>
 * @param axis The axis of rotation.<br>
 * @param angle The rotation angle in degrees.
 */
-(void)setRotation: (NTMapVec*)axis angle: (float)angle;
/**
 * Returns the scale of this model.<br>
 * @return model The relative scale.
 */
-(float)getScale;
/**
 * Sets the scale of this model. The default is 1.<br>
 * @param scale The relative scale of this model.
 */
-(void)setScale: (float)scale;
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

