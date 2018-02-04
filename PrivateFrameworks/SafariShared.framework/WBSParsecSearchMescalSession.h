/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchMescalSession : NSObject {
    bool  _complete;
    struct FairPlayHWInfo_ { 
        unsigned int IDLength; 
        unsigned char ID[20]; 
    }  _hardwareInfo;
    struct FPSAPContextOpaque_ { } * _session;
    unsigned long long  _versionNumber;
}

- (bool)_getHardwareInfo:(struct FairPlayHWInfo_ { unsigned int x1; unsigned char x2[20]; }*)arg1;
- (void)dealloc;
- (id)exchangedDataForData:(id)arg1;
- (id)init;
- (id)initWithVersionNumber:(unsigned long long)arg1;
- (id)signatureStringForData:(id)arg1;

@end