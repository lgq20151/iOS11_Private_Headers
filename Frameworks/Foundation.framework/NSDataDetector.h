/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDataDetector : NSRegularExpression {
    unsigned long long  _types;
}

@property (readonly) unsigned long long checkingTypes;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (unsigned long long)checkingTypes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 usingBlock:(id /* block */)arg4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numberOfCaptureGroups;
- (unsigned long long)options;
- (id)pattern;

// Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow

+ (void)runDataDetectors:(id)arg1 completion:(id /* block */)arg2;

@end
