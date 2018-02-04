/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface SFSpeechRecognitionResult : NSObject <NSCopying, NSSecureCoding> {
    SFTranscription * _bestTranscription;
    bool  _final;
    SFTranscription * _rawTranscription;
    NSArray * _rawTranscriptions;
    NSArray * _transcriptions;
}

@property (nonatomic, readonly, copy) SFTranscription *bestTranscription;
@property (getter=isFinal, nonatomic, readonly) bool final;
@property (nonatomic, readonly, copy) SFTranscription *rawTranscription;
@property (nonatomic, readonly, copy) NSArray *rawTranscriptions;
@property (nonatomic, readonly, copy) NSArray *transcriptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithBestTranscription:(id)arg1 final:(bool)arg2;
- (id)_initWithBestTranscription:(id)arg1 rawTranscription:(id)arg2 final:(bool)arg3;
- (id)bestTranscription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expandTranscription:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (id)rawTranscription;
- (id)rawTranscriptions;
- (id)transcriptions;

@end