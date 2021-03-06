/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADScene3D : NSObject <NSCopying> {
    OADBackdrop * mBackdrop;
    OADCamera * mCamera;
    OADLightRig * mLightRig;
}

+ (id)nullScene3D;

- (id)backdrop;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)lightRig;
- (void)setBackdrop:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setLightRig:(id)arg1;

@end
