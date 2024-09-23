import XCTest
@testable import CPPDemoLib

final class CPPDemoLibTests: XCTestCase {
    func testTerminateHandler() throws {
        CPPDemoLib.setCplusplusTerminateHandler {
            print("Hello, Exception!")
        }
    }
}
