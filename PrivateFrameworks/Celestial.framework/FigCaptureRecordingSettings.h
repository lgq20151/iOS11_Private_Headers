/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureRecordingSettings : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _maxDuration;
    long long  _maxFileSize;
    long long  _minFreeDiskSpaceLimit;
    NSString * _outputFileType;
    NSURL * _outputURL;
    long long  _settingsID;
}

@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } maxDuration;
@property (nonatomic) long long maxFileSize;
@property (nonatomic) long long minFreeDiskSpaceLimit;
@property (nonatomic, copy) NSString *outputFileType;
@property (nonatomic, copy) NSURL *outputURL;
@property (nonatomic) long long settingsID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (long long)maxFileSize;
- (long long)minFreeDiskSpaceLimit;
- (id)outputFileType;
- (id)outputURL;
- (void)setMaxDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMaxFileSize:(long long)arg1;
- (void)setMinFreeDiskSpaceLimit:(long long)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setSettingsID:(long long)arg1;
- (long long)settingsID;

@end
