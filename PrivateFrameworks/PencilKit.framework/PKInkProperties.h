/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInkProperties : NSObject

+ (struct { double x1; double x2; double x3; double x4; })controlPointsForFunctionType:(unsigned long long)arg1;
+ (id)functionNames;
+ (unsigned long long)functionTypeForName:(id)arg1;
+ (id)inkPropertyNames;
+ (id)inputMaskNames;
+ (id)inputNames;
+ (struct { double x1; double x2; })rangeForInkProperty:(unsigned long long)arg1;
+ (struct { double x1; double x2; })rangeForInput:(unsigned long long)arg1;

@end
