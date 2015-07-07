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


#import "NTColor.h"
#import "NTBillboardStyle.h"

/**
 * A style for labels. Contains attributes for configuring how the label is drawn on the screen.
 */
__attribute__ ((visibility("default"))) @interface NTLabelStyle : NTBillboardStyle
-(void*)getCptr;
-(id)initWithCptr: (void*)cptr swigOwnCObject: (BOOL)ownCObject;

+(NTLabelStyle*)swigCreatePolymorphicInstance:(void*)cPtr swigOwnCObject:(BOOL)cMemoryOwn;

/**
 * Constructs a LabelStyle object from various parameters. Instantiating the object directly is<br>
 * not recommended, LabelStyleBuilder should be used instead.<br>
 * @param color The color for the label.<br>
 * @param attachAnchorPointX The horizontal attaching anchor point for the label.<br>
 * @param attachAnchorPointY The vertical attaching anchor point for the label.<br>
 * @param causesOverlap The causes overlap flag for the label.<br>
 * @param hideIfOverlapped The hide if overlapped flag for the label.<br>
 * @param horizontalOffset The horizontal offset for the label.<br>
 * @param verticalOffset The vertical offset for the label.<br>
 * @param placementPriority The placement priority for the label.<br>
 * @param scaleWithDPI The scale with DPI flag for the label.<br>
 * @param anchorPointX The horizontal anchor point for the label.<br>
 * @param anchorPointY The vertical anchor point for the label.<br>
 * @param flippable The fliappble flag for the label.<br>
 * @param orientationMode The orientation mode for the label.<br>
 * @param scalingMode The scaling mode for the label.
 */
-(id)initWithColor: (NTColor*)color attachAnchorPointX: (float)attachAnchorPointX attachAnchorPointY: (float)attachAnchorPointY causesOverlap: (BOOL)causesOverlap hideIfOverlapped: (BOOL)hideIfOverlapped horizontalOffset: (float)horizontalOffset verticalOffset: (float)verticalOffset placementPriority: (int)placementPriority scaleWithDPI: (BOOL)scaleWithDPI anchorPointX: (float)anchorPointX anchorPointY: (float)anchorPointY flippable: (BOOL)flippable orientationMode: (enum NTBillboardOrientation)orientationMode scalingMode: (enum NTBillboardScaling)scalingMode;
/**
 * Returns the horizontal anchor point of the label.<br>
 * @return The horizontal anchor point of the label.
 */
-(float)getAnchorPointX;
/**
 * Returns the vertical anchor point of the label.<br>
 * @return The vertical anchor point of the label.
 */
-(float)getAnchorPointY;
/**
 * Returns the state of the flippable flag.<br>
 * @return True if the label is flippable.
 */
-(BOOL)isFlippable;
/**
 * Returns the orientation mode of the label.<br>
 * @return The orientation mode of the label.
 */
-(enum NTBillboardOrientation)getOrientationMode;
/**
 * Returns the scaling mode of the label.<br>
 * @return The scaling mode of the label.
 */
-(enum NTBillboardScaling)getScalingMode;
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

