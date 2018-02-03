/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {
    struct OpaqueCMClock { } * _clock;
    struct opaqueCMFormatDescription { } * _formatDescription;
    int  _sourceSubType;
}

@property (nonatomic, retain) struct OpaqueCMClock { }*clock;
@property (nonatomic, retain) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic) int sourceSubType;

- (struct OpaqueCMClock { }*)clock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClock:(struct OpaqueCMClock { }*)arg1;
- (void)setFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
- (void)setSourceSubType:(int)arg1;
- (int)sourceSubType;

@end
