/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _derivedFromPreview;
    bool  _discardsLateVideoFrames;
}

@property (nonatomic) bool derivedFromPreview;
@property (nonatomic) bool discardsLateVideoFrames;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (bool)derivedFromPreview;
- (id)description;
- (bool)discardsLateVideoFrames;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDerivedFromPreview:(bool)arg1;
- (void)setDiscardsLateVideoFrames:(bool)arg1;
- (int)sinkType;

@end
