/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCompanionRemoteComplication : NTKRemoteComplication {
    NTKCompanion3rdPartyApp * _app;
}

@property (nonatomic, retain) NTKCompanion3rdPartyApp *app;

+ (id)complicationWithApp:(id)arg1;

- (void).cxx_destruct;
- (id)app;
- (id)localizedDetailText;
- (void)setApp:(id)arg1;

@end
