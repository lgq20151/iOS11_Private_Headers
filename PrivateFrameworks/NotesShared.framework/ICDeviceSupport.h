/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICDeviceSupport : NSObject

+ (bool)deviceSupportsFaceID;
+ (bool)deviceSupportsPencil;
+ (bool)deviceSupportsTouchID;
+ (struct CGSize { double x1; double x2; })notesDeviceDrawingSize;
+ (bool)notesDeviceSupportsLetterpress;
+ (bool)notesLowEndHardware;
+ (id)notesProductType;
+ (bool)shouldOnlyDrawWithPencil;

@end