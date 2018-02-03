/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponseInternal : NSObject <NSCoding> {
    bool  isMixedReplace;
    struct __SecTrust { } * peerTrust;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
