/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABTCC : NSObject {
    bool  _calledExternalChangeCallbacks;
    bool  _simulateAccessPrompt;
    unsigned int  _simulateAccessPromptDelay;
    bool  _simulateAccessPromptGranted;
    long long  _simulateType;
}

+ (id)sharedInstance;

- (id)_simulateQueue;
- (int)accessPreflight;
- (void)accessRequestWithCompletion:(id /* block */)arg1;
- (void)callExternalChangeCallbacks:(bool)arg1;
- (void)dealloc;
- (id)init;
- (unsigned char)isAccessRestricted;
- (void)simulate:(long long)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1;
- (void)simulateIfAccessPromptDisplayedThenUserGrantedAccess:(bool)arg1 withDelay:(unsigned int)arg2;

@end
