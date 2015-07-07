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

/**
 * Line geometry defined by a list of map positions.
 */
__attribute__ ((visibility("default"))) @interface NTLineGeometry : NTGeometry
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTLineGeometry*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a new LineGeometry object from a map position list.
 */
-(id)initWithPoses: (NTMapPosVector*)poses;
-(NTMapPos*)getCenterPos;
/**
 * Returns the list of of map positions defining the line.<br>
 * @return The list of of map positions defining the line.
 */
-(NTMapPosVector*)getPoses;
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

