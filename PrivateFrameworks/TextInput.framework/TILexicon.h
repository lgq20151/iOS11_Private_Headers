/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TILexicon : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (id)lexiconWithEntries:(id)arg1;
+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
