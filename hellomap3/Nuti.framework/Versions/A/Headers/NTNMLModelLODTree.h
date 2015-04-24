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
#import "NTPointGeometry.h"
#import "NTVectorElement.h"

/**
 * A proxy class representing a small part (f.e a single building) of the NMLModelLODTree.
 */
__attribute__ ((visibility("default"))) @interface NTNMLModelLODTreeProxy : NTVectorElement
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;
/**
 * Constructs a NMLModelLODTreeProxy object from a map position.<br>
 * @param pos The map position that defines the location of this proxy.
 */
-(id)initWithPos: (NTMapPos*)pos;
-(NTPointGeometry*)getGeometry;

-(void)dealloc;

@end


#ifdef __cplusplus
}
#endif
