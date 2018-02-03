/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying> {
    int  _HDRMode;
    int  _SISMode;
    unsigned int  _bracketedImageCount;
    unsigned int  _outputHeight;
    unsigned int  _outputWidth;
    unsigned int  _processedOutputFormat;
    unsigned int  _rawOutputFormat;
    long long  _settingsID;
}

@property (nonatomic) int HDRMode;
@property (nonatomic) int SISMode;
@property (nonatomic) unsigned int bracketedImageCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int outputHeight;
@property (nonatomic) unsigned int outputWidth;
@property (nonatomic) unsigned int processedOutputFormat;
@property (nonatomic) unsigned int rawOutputFormat;
@property (nonatomic) long long settingsID;
@property (readonly) Class superclass;

- (int)HDRMode;
- (int)SISMode;
- (unsigned int)bracketedImageCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (id)figCaptureStillImageSettingsRepresentation;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)outputHeight;
- (unsigned int)outputWidth;
- (unsigned int)processedOutputFormat;
- (unsigned int)rawOutputFormat;
- (void)setBracketedImageCount:(unsigned int)arg1;
- (void)setHDRMode:(int)arg1;
- (void)setOutputHeight:(unsigned int)arg1;
- (void)setOutputWidth:(unsigned int)arg1;
- (void)setProcessedOutputFormat:(unsigned int)arg1;
- (void)setRawOutputFormat:(unsigned int)arg1;
- (void)setSISMode:(int)arg1;
- (void)setSettingsID:(long long)arg1;
- (long long)settingsID;

@end
