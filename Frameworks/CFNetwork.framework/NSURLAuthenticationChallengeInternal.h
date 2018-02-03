/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSError * error;
    NSURLResponse * failureResponse;
    long long  preferredProtSpaceIndex;
    long long  previousFailureCount;
    NSURLCredential * proposedCredential;
    NSArray * protectionSpacesForChallenge;
    <NSURLAuthenticationChallengeSender> * sender;
    NSURLProtectionSpace * space;
}

- (void)dealloc;
- (id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6;

@end
