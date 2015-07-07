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


#import "NTGeometry.h"

/**
 * Base class for geometry simplifiers.
 */
__attribute__ ((visibility("default"))) @interface NTGeometrySimplifier : NSObject
{
  void *swigCPtr;
  BOOL swigCMemOwn;
}
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

/**  
 * Checks if this object is equal to the specified object.
 * @return True when objects are equal, false otherwise.
 */
-(BOOL)isEqual:(id)object;

/**
 * Returns the hash value of this object.
 * @return The hash value of this object.
 */
-(NSUInteger)hash;


+(NTGeometrySimplifier*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Perform the simplification of the given geometry, given relative scale.<br>
 * @param geometry The geometry to simplify.<br>
 * @param scale Relative scale for simplification, this is proportional to 2^zoom.<br>
 * @return The simplified geometry. If simplification failed, original geometry may be returned. <br>
 *         Null pointer may be returned if geometry should be discarded.
 */
-(NTGeometry*)simplify: (NTGeometry*)geometry scale: (float)scale;
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

