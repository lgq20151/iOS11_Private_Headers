/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARCardRequest : PARRequest <NSSecureCoding> {
    NSURL * _cardURL;
}

@property (nonatomic, copy) NSURL *cardURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cardURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCardURL:(id)arg1;

@end