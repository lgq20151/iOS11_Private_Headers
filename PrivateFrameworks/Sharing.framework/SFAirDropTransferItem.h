/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropTransferItem : NSObject <NSSecureCoding> {
    long long  _count;
    bool  _isFile;
    NSString * _type;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) bool isFile;
@property (nonatomic, readonly, copy) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 isFile:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFile;
- (id)type;

@end
