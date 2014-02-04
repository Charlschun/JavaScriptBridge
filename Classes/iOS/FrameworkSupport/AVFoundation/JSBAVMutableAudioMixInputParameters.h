#import <AVFoundation/AVBase.h>
#import <Foundation/Foundation.h>
#import <CoreMedia/CMBase.h>
#import <CoreMedia/CMTime.h>
#import <CoreMedia/CMTimeRange.h>
#import <MediaToolbox/MTAudioProcessingTap.h>

@import AVFoundation;
@import JavaScriptCore;

@protocol JSBAVAudioMixInputParameters;

@protocol JSBAVMutableAudioMixInputParameters <JSExport, JSBAVAudioMixInputParameters>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

@property (nonatomic, readonly) CMPersistentTrackID trackID;
@property (nonatomic, copy, readonly) NSArray *inputParameters;
@property (nonatomic, copy, readonly) NSString *audioTimePitchAlgorithm;
@property (nonatomic, retain, readonly) id audioTapProcessor;

+ (AVMutableAudioMixInputParameters *)audioMixInputParametersWithTrack:(AVAssetTrack *)track;
+ (AVMutableAudioMixInputParameters *)audioMixInputParameters;

- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(CMTimeRange)timeRange;
- (void)setVolume:(float)volume atTime:(CMTime)time;

#pragma clang diagnostic pop

@end
