/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } extent;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) long long orientation;
@property (readonly) NUJSScale *scale;
@property (readonly) struct CGSize { double x1; double x2; } size;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extent;
- (id)geometry;
- (id)initWithGeometry:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (long long)orientation;
- (id)scale;
- (struct CGSize { double x1; double x2; })size;

@end