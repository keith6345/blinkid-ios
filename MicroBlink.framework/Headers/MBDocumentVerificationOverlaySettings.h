//
//  MBDocumentVerificationOverlaySettings.h
//  MicroBlinkDev
//
//  Created by Jura Skrlec on 28/05/2018.
//

#import "MBBaseOcrOverlaySettings.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Settings class containing UI information
 */
MB_CLASS_AVAILABLE_IOS(8.0)
@interface MBDocumentVerificationOverlaySettings : MBBaseOcrOverlaySettings

/**
 * Returns/sets user instructions that are shown above camera preview while the first side of the
 * document is being scanned.
 *
 * Default: string defined by "photopay_front_verification_document"
 * key in strings file in Microblink.bundle
 */
@property(nonatomic, strong) NSString *firstSideInstructions;

/**
 * Returns/sets user instructions that are shown above camera preview while the second side of the
 * document is being scanned.
 *
 * Default: string defined by "photopay_back_verification_document"
 * key in strings file in Microblink.bundle
 */
@property(nonatomic, strong) NSString *secondSideInstructions;

/**
 * Returns/sets splash message that is shown before scanning the first side of the document,
 * while starting camera.
 *
 * Default: string defined by "photopay_front_splash_verification_document"
 * key in strings file in Microblink.bundle
 */
@property(nonatomic, strong) NSString *firstSideSplashMessage;

/**
 * Returns/sets splash message that is shown before scanning the second side of the document,
 * while starting camera.
 *
 * Default: string defined by "photopay_back_splash_verification_document"
 * key in strings file in Microblink.bundle
 */
@property(nonatomic, strong) NSString *secondSideSplashMessage;

/**
 * Returns/sets glare status message that is shown if glare detection is turned on
 * and it is shown if glare is detected.
 *
 * Default: string defined by "photopay_glare_status"
 * key in strings file in Microblink.bundle
 */
@property(nonatomic, strong) NSString *glareStatusMessage;

/**
 * Returns/sets splash image which is shown below splash message, before scanning the first side of
 * the document, while starting camera.
 */
@property(nonatomic, strong) UIImage *firstSideSplashImage;

/**
 * Returns/sets splash image which is shown below splash message, before scanning the second side of
 * the document, while starting camera.
 */
@property(nonatomic, strong) UIImage *secondSideSplashImage;

/**
 * Returns image that is shown above camera preview, next to the user instructions message, while
 * the first side of the document is being scanned.
 */
@property(nonatomic, strong) UIImage *firstSideInstructionsImage;

/**
 * Returns image that is shown above camera preview, next to the user instructions message, while
 * the second side of the document is being scanned.
 */
@property(nonatomic, strong) UIImage *secondSideInstructionsImage;

@end

NS_ASSUME_NONNULL_END
